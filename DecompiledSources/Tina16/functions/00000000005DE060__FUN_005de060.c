/* Ghidra address: 005de060 */
/* Ghidra symbol: FUN_005de060 */


undefined8
FUN_005de060(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_1028 [4032];
  undefined1 local_68;
  
  local_68 = 0;
  uVar2 = FUN_00416740(param_3);
  uVar3 = FUN_00416740(param_4);
  uVar4 = FUN_00416740(param_5);
  uVar5 = FUN_00416740(*(undefined8 *)(param_1 + 8));
  uVar1 = thunk_FUN_03b4b941(uVar2,uVar3,uVar4,local_1028,0x800,uVar5);
  FUN_00414740(param_2,local_1028,uVar1);
  return param_2;
}

