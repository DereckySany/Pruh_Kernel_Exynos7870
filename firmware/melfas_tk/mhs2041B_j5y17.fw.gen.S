/* Generated by firmware/Makefile */
    .section .rodata
    .p2align 3
_fw_melfas_tk_mhs2041B_j5y17_fw_bin:
    .incbin "./firmware/melfas_tk/mhs2041B_j5y17.fw"
_fw_end:
   .section .rodata.str,"aMS",@progbits,1
    .p2align 3
_fw_melfas_tk_mhs2041B_j5y17_fw_name:
    .string "melfas_tk/mhs2041B_j5y17.fw"
    .section .builtin_fw,"a",@progbits
    .p2align 3
    .quad _fw_melfas_tk_mhs2041B_j5y17_fw_name
    .quad _fw_melfas_tk_mhs2041B_j5y17_fw_bin
    .quad _fw_end - _fw_melfas_tk_mhs2041B_j5y17_fw_bin
