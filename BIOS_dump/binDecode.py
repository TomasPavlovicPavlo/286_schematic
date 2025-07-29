def convert(file, out):
    for index_in in range(0x0, 0x8000):
        file.seek(index_in)
        num = file.read(1)
        # print(hex(int.from_bytes(num)))
        index_out = index_in << 1
        if (index_out & 0x8000):
            index_out += 1
            index_out &= 0x7FFF
        out.seek(index_out)
        out.write(num)



file = "286-SUNTAC-10 V3.1c Award.BIN"

out_file = "286-SUNTAC-10 V3.1c Award_out.BIN"

dump = open(file, "rb")

out = open(out_file, "wb")

convert(dump, out)

out.close()

print("end")