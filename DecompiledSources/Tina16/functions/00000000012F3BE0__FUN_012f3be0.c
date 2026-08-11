/* Ghidra address: 012f3be0 */
/* Ghidra symbol: FUN_012f3be0 */


void FUN_012f3be0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a0),local_20);
  cVar1 = FUN_00b96980(0,0,local_20,0x2b,0);
  if (cVar1 != '\0') {
    FUN_012fa2c0(param_1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7a0),local_20[0]);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7c0),local_20[0]);
    FUN_006df690(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550));
    uVar3 = FUN_012f2410(0x10);
    uVar3 = FUN_006dee70(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),0,&LAB_012f3e38,
                         uVar3);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x260))(*(longlong **)(param_1 + 0x7b0))
    ;
    FUN_012fafd0(param_1,uVar3,local_20[0],uVar2);
    FUN_006e1e60(*(undefined8 *)(param_1 + 0x700),FUN_012f3410,0,1);
    FUN_006e23c0(*(undefined8 *)(param_1 + 0x700));
    FUN_006e24b0(*(undefined8 *)(param_1 + 0x700),uVar3);
    FUN_006df710(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550));
    (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x128))(*(longlong **)(param_1 + 0x7a8),1);
    (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x128))(*(longlong **)(param_1 + 0x7b8),1);
    (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x128))(*(longlong **)(param_1 + 0x7c8),1);
    (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x128))(*(longlong **)(param_1 + 0x7e0),1);
    (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x128))(*(longlong **)(param_1 + 0x7e8),1);
    FUN_013039b0(param_1,1,0,0);
    FUN_012ddec0(*(undefined8 *)(param_1 + 0xac8));
    FUN_01303ee0(param_1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7d8),0);
    FUN_01303240(param_1,0,0,0);
  }
  FUN_00414480(local_20);
  return;
}

