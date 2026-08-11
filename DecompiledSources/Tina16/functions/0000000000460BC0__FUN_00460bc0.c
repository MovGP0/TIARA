/* Ghidra address: 00460bc0 */
/* Ghidra symbol: FUN_00460bc0 */


void FUN_00460bc0(longlong param_1,ushort *param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  char cVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_50;
  longlong *local_40;
  undefined1 local_38 [24];
  undefined1 *local_20;
  
  local_50 = auStack_88;
  if (param_1 == 0) {
    local_20 = (undefined1 *)0x0;
    local_50 = auStack_88;
  }
  else {
    thunk_FUN_04125dff(local_38);
    local_20 = local_38;
  }
  uVar1 = *param_2;
  if (uVar1 < 0x102) {
    if ((uVar1 != 0x101) && ((uVar1 != 9 && (uVar1 != 0xd)))) {
LAB_00460c84:
      cVar2 = FUN_0046eed0(uVar1,&local_40);
      if (cVar2 == '\0') {
        FUN_00460210();
      }
      else {
        local_68 = param_4;
        (**(code **)(*local_40 + 0x20))(local_40,local_20,param_2,param_3);
      }
      goto code_r0x00460cc7;
    }
  }
  else if ((uVar1 != 0x4009) && (uVar1 != 0x400d)) goto LAB_00460c84;
  if (PTR_FUN_02010960 != (undefined *)0x0) {
    (*(code *)PTR_FUN_02010960)(local_20,param_2,param_3,param_4);
  }
code_r0x00460cc7:
  if (local_20 != (undefined1 *)0x0) {
    FUN_00461840(param_1,local_20);
    FUN_00460b80(local_38);
  }
  return;
}

