/* Ghidra address: 00ddd840 */
/* Ghidra symbol: FUN_00ddd840 */


void FUN_00ddd840(longlong param_1,ulonglong *param_2,longlong *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined1 *local_50;
  ulonglong local_48;
  ulonglong local_40;
  longlong local_38;
  longlong *local_30 [2];
  
  local_50 = auStack_88;
  local_30[0] = (longlong *)0x0;
  local_48 = *param_2;
  local_40 = param_2[1];
  puVar1 = auStack_88;
  if ((short)local_40 == 0x1d) {
    uVar3 = FUN_0041b800(local_30);
    uVar2 = (**(code **)(*param_3 + 0x70))(param_3,local_48 & 0xffffffff,uVar3);
    FUN_006245b0(uVar2);
    uVar2 = (**(code **)(*local_30[0] + 0x18))(local_30[0],&local_38);
    FUN_006245b0(uVar2);
    if (*(int *)(local_38 + 0x2c) == 0) {
      uVar3 = FUN_004aea80(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x490) + 0x68));
      local_68 = local_30[0];
      uVar4 = FUN_00ddc810(&DAT_00ddaa38,1,param_4,*(undefined2 *)(local_38 + 0x32));
      FUN_004ae7e0(uVar3,uVar4);
    }
    (**(code **)(*local_30[0] + 0x98))(local_30[0],local_38);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  FUN_0041b800(local_30);
  return;
}

