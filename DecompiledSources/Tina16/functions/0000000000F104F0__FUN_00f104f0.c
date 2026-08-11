/* Ghidra address: 00f104f0 */
/* Ghidra symbol: FUN_00f104f0 */


void FUN_00f104f0(longlong param_1,undefined8 param_2,short *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  if (*param_3 == 0xd) {
    local_20 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6f0));
    local_28 = FUN_00b90090(*(undefined8 *)(param_1 + 0xa08));
    cVar1 = FUN_01ac3630(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xf8),&local_20,
                         &local_28);
    if (cVar1 == '\0') {
      uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6f0));
      FUN_01ae24a0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0,uVar2);
    }
    else {
      FUN_01ae24a0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0,local_20);
    }
    *param_3 = 0;
  }
  return;
}

