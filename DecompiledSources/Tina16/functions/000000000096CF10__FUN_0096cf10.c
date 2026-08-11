/* Ghidra address: 0096cf10 */
/* Ghidra symbol: FUN_0096cf10 */


void FUN_0096cf10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 *param_7)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_009671f0(param_1);
  uVar2 = FUN_00414520(param_4);
  uVar3 = FUN_00414520(param_5);
  uVar4 = FUN_00414520(param_6);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))
                    (*(longlong **)(param_1 + 0x50),param_3,1,uVar2,uVar3,uVar4);
  *param_7 = uVar1;
  return;
}

