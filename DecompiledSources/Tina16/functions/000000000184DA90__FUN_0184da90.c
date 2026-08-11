/* Ghidra address: 0184da90 */
/* Ghidra symbol: FUN_0184da90 */


void FUN_0184da90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  lVar1 = FUN_0184cde0(param_1,param_2);
  if (lVar1 == 0) {
    uVar3 = FUN_018228f0(param_3,param_1);
    plVar2 = (longlong *)FUN_01847460(&DAT_01843700,1,param_2,uVar3,param_3);
    (**(code **)(*plVar2 + 8))(plVar2,param_4);
    plVar2[0xf] = *(longlong *)(param_1 + 0x100);
    plVar2[0x10] = *(longlong *)(param_1 + 0x108);
    FUN_0184caa0(param_1,plVar2[4],plVar2);
  }
  return;
}

