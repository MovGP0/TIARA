/* Ghidra address: 0067ed40 */
/* Ghidra symbol: FUN_0067ed40 */


void FUN_0067ed40(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 local_58 [16];
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_2c;
  
  uVar1 = FUN_0060f580(param_5);
  uVar2 = FUN_0060f570(uVar1);
  if ((*(uint *)((longlong)param_1 + 0xa4) & 0x8000) != 0) {
    uVar2 = uVar2 | 0x800000;
  }
  local_48[0] = 0x21;
  local_44 = *(undefined4 *)(*(longlong *)(param_1[0x62] + 0x70) + 0x28);
  local_2c = (undefined4)param_1[0x67];
  uVar3 = FUN_00777cd0();
  plVar4 = (longlong *)FUN_00777cd0();
  uVar5 = (**(code **)(*param_1 + 0xf0))(param_1);
  (**(code **)(*plVar4 + 0x1e8))(plVar4,local_58,(&DAT_01df955c)[uVar5 & 0xff]);
  FUN_00779040(uVar3,param_2,local_58,param_3,param_4,uVar2,local_48,0);
  return;
}

