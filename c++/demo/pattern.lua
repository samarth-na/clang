function Pattern()
	A = { 1, 2, 3, 4, 5 }
	for _, x in pairs(A) do
		for _ = 1, x, 1 do
			io.write("x")
		end
		io.write("\n")
	end
end

print(Pattern())
