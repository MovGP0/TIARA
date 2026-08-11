/* Ghidra address: 01809a30 */
/* Ghidra symbol: FUN_01809a30 */


void FUN_01809a30(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = FUN_0045ae90();
  plVar3 = (longlong *)FUN_004ba470(&PTR_FUN_0047d288,1,0,uVar2,1);
  uVar2 = FUN_00415ab0(param_2);
  uVar1 = FUN_00414cd0(param_2);
  (**(code **)(*plVar3 + 0x20))(plVar3,uVar2,uVar1);
  FUN_004b6dc0(plVar3,0);
  FUN_0180aa30(param_1,plVar3);
  FUN_00410f20(plVar3);
  return;
}

