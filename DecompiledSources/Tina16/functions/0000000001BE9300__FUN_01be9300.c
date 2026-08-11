/* Ghidra address: 01be9300 */
/* Ghidra symbol: FUN_01be9300 */


void FUN_01be9300(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [40];
  
  if ((*(ushort *)(param_2 + 0x34) & 8) == 0) {
    if (param_1[0xd1] == 0) {
      lVar1 = FUN_01be9090(auStack_38,0);
      param_1[0xd0] = lVar1;
      lVar1 = FUN_01be9090(auStack_38,1);
      param_1[0xd1] = lVar1;
      lVar1 = FUN_01be9090(auStack_38,2);
      param_1[0xd2] = lVar1;
    }
    uVar2 = (**(code **)(*(longlong *)param_1[0xd0] + 0xd0))((longlong *)param_1[0xd0]);
    FUN_006aa5e0(uVar2,param_2);
    uVar2 = (**(code **)(*(longlong *)param_1[0xd1] + 0xd0))((longlong *)param_1[0xd1]);
    FUN_006aa5e0(uVar2,param_2);
    uVar2 = (**(code **)(*(longlong *)param_1[0xd2] + 0xd0))((longlong *)param_1[0xd2]);
    FUN_006aa5e0(uVar2,param_2);
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

