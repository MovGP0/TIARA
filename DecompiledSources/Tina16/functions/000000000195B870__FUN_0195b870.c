/* Ghidra address: 0195b870 */
/* Ghidra symbol: FUN_0195b870 */


void FUN_0195b870(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_01958b10(&PTR_FUN_01921868,1);
  FUN_01958e60(lVar1,0);
  *(undefined1 *)(lVar1 + 0x3d) = 0xf;
  FUN_01958e80(lVar1,0x3ff0000000000000);
  FUN_01958e40(lVar1,param_3 + 0x202020);
  FUN_0195a020(lVar1,*(undefined8 *)(param_1 + 0x288),*(undefined4 *)(param_1 + 0x248),
               *(undefined4 *)(param_1 + 0x24c),*(undefined4 *)(param_1 + 0x250),
               *(undefined4 *)(param_1 + 0x254),*(undefined8 *)(param_1 + 0x268),
               *(undefined8 *)(param_1 + 0x270));
  FUN_00410f20(lVar1);
  uVar2 = FUN_005ffa40(param_2);
  FUN_0180c8f0(uVar2,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x24c),
               *(int *)(param_1 + 0x250) + 1,*(int *)(param_1 + 0x254) + 1,param_3);
  return;
}

