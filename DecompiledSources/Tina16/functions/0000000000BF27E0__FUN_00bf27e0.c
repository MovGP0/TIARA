/* Ghidra address: 00bf27e0 */
/* Ghidra symbol: FUN_00bf27e0 */


void FUN_00bf27e0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_00442c30(*(undefined8 *)(param_1 + 0x2c0));
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  FUN_00654e40(param_1,param_2);
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffc;
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) | *(uint *)(&DAT_01e9cef8 + (ulonglong)*(byte *)(param_1 + 0x5c0) * 4)
       | 0x2000000;
  if (((*PTR_DAT_02003210 != '\0') && (*(char *)(param_1 + 0x390) != '\0')) &&
     (*(char *)(param_1 + 0x5c0) == '\x01')) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xff7fffff;
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x200;
    if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
      cVar1 = FUN_0044f0c0(5,1);
      if (cVar1 != '\0') {
        *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x2000000;
      }
    }
  }
  return;
}

