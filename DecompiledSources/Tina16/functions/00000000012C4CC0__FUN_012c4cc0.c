/* Ghidra address: 012c4cc0 */
/* Ghidra symbol: FUN_012c4cc0 */


void FUN_012c4cc0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),local_20);
  cVar1 = FUN_00b96980(0,0,local_20,8,0);
  if (cVar1 != '\0') {
    FUN_012c7130(param_1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_20[0]);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x730),local_20[0]);
    FUN_006df690(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550));
    uVar3 = FUN_012c28a0(0x10);
    uVar3 = FUN_006dee70(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550),0,&LAB_012c4e98,
                         uVar3);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718))
    ;
    FUN_012c7620(param_1,uVar3,local_20[0],uVar2);
    FUN_006e1e60(*(undefined8 *)(param_1 + 0x748),FUN_012c45e0,0,1);
    FUN_006e23c0(*(undefined8 *)(param_1 + 0x748));
    FUN_006e24b0(*(undefined8 *)(param_1 + 0x748),uVar3);
    FUN_006df710(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550));
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))(*(longlong **)(param_1 + 0x710),1);
    (**(code **)(**(longlong **)(param_1 + 0x720) + 0x128))(*(longlong **)(param_1 + 0x720),1);
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x128))(*(longlong **)(param_1 + 0x738),1);
  }
  FUN_00414480(local_20);
  return;
}

