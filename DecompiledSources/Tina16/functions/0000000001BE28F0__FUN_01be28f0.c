/* Ghidra address: 01be28f0 */
/* Ghidra symbol: FUN_01be28f0 */


void FUN_01be28f0(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_01be54a0(param_1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x620);
  *(undefined8 *)(param_1 + 0x620) = 0;
  FUN_00410f20(uVar1);
  DAT_02111468 = 0;
  if ((*(char *)(param_1 + 0x4c0) != '\0') && (*(longlong *)PTR_DAT_02001a48 != 0)) {
    (**(code **)(**(longlong **)PTR_DAT_02001a48 + 0x30))(*(longlong **)PTR_DAT_02001a48,0);
  }
  *(undefined1 *)(param_1 + 0x578) = 1;
  thunk_FUN_0418d03a(0);
  uVar1 = *(undefined8 *)(param_1 + 0x650);
  *(undefined8 *)(param_1 + 0x650) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x648);
  *(undefined8 *)(param_1 + 0x648) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x638);
  *(undefined8 *)(param_1 + 0x638) = 0;
  FUN_00410f20(uVar1);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_0415357f(5,uVar1,0xfffffffd,0);
  return;
}

