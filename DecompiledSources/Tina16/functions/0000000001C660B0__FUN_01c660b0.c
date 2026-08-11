/* Ghidra address: 01c660b0 */
/* Ghidra symbol: FUN_01c660b0 */


void FUN_01c660b0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = 0;
  if (param_2 != (longlong *)0x0) {
    cVar1 = FUN_0198a580(param_2);
    if (cVar1 == '\x04') {
      uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
      uVar3 = FUN_0040eee0(param_1 + 0x28,uVar2,1);
      uVar3 = FUN_0040f3d0(uVar3,9);
      FUN_01d03640(param_2,&local_20,*(undefined8 *)PTR_DAT_02001f18);
      uVar3 = FUN_0040f200(uVar3,local_20);
      uVar3 = FUN_0040f3d0(uVar3,9);
      uVar3 = FUN_0040ef30(uVar3,(int)param_2[0x14]);
      uVar3 = FUN_0040f3d0(uVar3,9);
      uVar3 = FUN_0040ef30(uVar3,*(undefined4 *)((longlong)param_2 + 0xa4));
      FUN_0040f590(uVar3);
      FUN_00409900();
    }
  }
  FUN_00414480(&local_20);
  return;
}

