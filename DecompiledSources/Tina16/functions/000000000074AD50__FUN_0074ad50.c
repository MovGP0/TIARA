/* Ghidra address: 0074ad50 */
/* Ghidra symbol: FUN_0074ad50 */


void FUN_0074ad50(longlong param_1,short *param_2)

{
  undefined8 uVar1;
  char cVar2;
  code *pcVar3;
  
  FUN_00659a30(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  pcVar3 = (code *)FUN_00411550(uVar1,0xffb5);
  (*pcVar3)(uVar1,param_2);
  if ((*param_2 == 8) || (*param_2 == 0x20)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x270))(*(longlong **)(param_1 + 0x78));
    if (cVar2 == '\0') {
      *param_2 = 0;
    }
  }
  return;
}

