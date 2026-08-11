/* Ghidra address: 017bd570 */
/* Ghidra symbol: FUN_017bd570 */


undefined8 FUN_017bd570(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [24];
  
  local_40 = param_3;
  local_3c = param_4;
  FUN_017be0e0(param_1,param_2,local_38,PTR_DAT_02004010[0x816],PTR_DAT_02004010[0x814],
               *PTR_DAT_020037e8,PTR_DAT_02004010[0x815],*PTR_DAT_02005310);
  cVar1 = FUN_00b958b0(local_38,&local_40);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xaa) = 0;
    uVar2 = FUN_017bd4a0(param_1,param_3,param_4);
  }
  else {
    *(undefined1 *)(param_1 + 0xaa) = 1;
    uVar2 = 1;
  }
  return uVar2;
}

