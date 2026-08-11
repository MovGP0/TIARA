/* Ghidra address: 018044b0 */
/* Ghidra symbol: FUN_018044b0 */


void FUN_018044b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  if (*(char *)(param_1 + 0x20) != '\0') goto LAB_01804626;
  FUN_00416660(&local_28,0xff);
  FUN_004168e0(local_20,*(undefined8 *)(param_1 + 0x10));
  iVar2 = FUN_00416420(local_20[0],0);
  if (iVar2 == 0) {
LAB_01804536:
    FUN_00416660(local_20,0xff);
    uVar4 = FUN_00415f70(local_20[0]);
    uVar3 = thunk_FUN_0418dd92(0xff,uVar4);
    FUN_00416660(local_20,uVar3);
  }
  else {
    FUN_004168b0(&local_30,local_20[0]);
    cVar1 = FUN_00440b00(local_30,1);
    if (cVar1 == '\0') goto LAB_01804536;
    FUN_00415f90(local_20,&DAT_01804684);
  }
  iVar2 = FUN_00416420(local_20[0],0);
  if (iVar2 != 0) {
    iVar2 = FUN_00414cc0(local_20[0]);
    if (*(short *)(local_20[0] + -2 + (longlong)iVar2 * 2) != 0x5c) {
      FUN_00415f90(local_20,&DAT_0180468c);
    }
  }
  uVar4 = FUN_00415f70(local_20[0]);
  uVar5 = FUN_00415f70(local_28);
  thunk_FUN_041b7910(uVar4,&LAB_01804690,0,uVar5);
  uVar4 = FUN_00415f70(local_28);
  FUN_00442b00(&local_38,uVar4);
  FUN_00414ad0(param_1 + 0x18,local_38);
  uVar4 = FUN_004b9860(&PTR_FUN_0047c498,1,*(undefined8 *)(param_1 + 0x18),2);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined1 *)(param_1 + 0x20) = 1;
LAB_01804626:
  FUN_00414560(&local_38,2);
  FUN_004145c0(&local_28,2);
  return;
}

