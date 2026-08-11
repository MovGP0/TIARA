/* Ghidra address: 004c3760 */
/* Ghidra symbol: FUN_004c3760 */


void FUN_004c3760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 char param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)*param_4;
  uVar2 = param_4[1];
  if ((param_5 != '\0') && (pcVar1 != (code *)0x0)) {
    FUN_004c8020(param_1);
    (*pcVar1)(uVar2,param_1);
  }
  return;
}

