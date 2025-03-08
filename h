-- Define the folder inside Workspace
local folder = game.Workspace:FindFirstChild("Cameras")

-- Ensure the folder exists
if folder then
    for _, child in ipairs(folder:GetChildren()) do
        if child:IsA("Model") then  -- Check if the child is a Model
            local highlight = Instance.new("Highlight")
            highlight.Adornee = child
            highlight.FillColor = Color3.fromRGB(0, 255, 0) -- Green color
            highlight.FillTransparency = 0.5 -- Make it slightly transparent
            highlight.OutlineColor = Color3.fromRGB(0, 255, 0) -- Green outline
            highlight.Parent = child
            
            -- Create BillboardGui for camera icon
            local billboard = Instance.new("BillboardGui")
            billboard.Size = UDim2.new(2, 0, 2, 0) -- Adjust size
            billboard.StudsOffset = Vector3.new(0, 3, 0) -- Position above the model
            billboard.Adornee = child
            billboard.Parent = child

            -- Create ImageLabel for icon
            local imageLabel = Instance.new("ImageLabel")
            imageLabel.Size = UDim2.new(1, 0, 1, 0)
            imageLabel.BackgroundTransparency = 1
            imageLabel.Image = "rbxassetid://6031097225" -- Camera icon
            imageLabel.Parent = billboard
        end
    end
else
    warn("Folder not found in Workspace!")
end
