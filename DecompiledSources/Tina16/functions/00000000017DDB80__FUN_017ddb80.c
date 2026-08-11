/* Ghidra address: 017ddb80 */
/* Ghidra symbol: FUN_017ddb80 */


void FUN_017ddb80(longlong param_1,undefined4 param_2,int param_3,undefined8 *param_4,
                 undefined8 *param_5,int *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00409620(param_4,(longlong)((*param_6 + 1) * 8));
    puVar1 = (undefined8 *)FUN_017dcb00(param_1,*param_4,*param_6 * 8);
    FUN_00409620(param_5,(longlong)((*param_6 + 1) * 8));
    puVar2 = (undefined8 *)FUN_017dcb00(param_1,*param_5,*param_6 * 8);
    uVar3 = FUN_00498310(param_2,param_3);
    *puVar2 = uVar3;
    if (param_3 < *(int *)(param_1 + 8)) {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        uVar3 = thunk_FUN_041d37d3(*(undefined8 *)(param_1 + 0x1d0),param_2,param_3);
        *puVar1 = uVar3;
      }
      if (*(char *)(param_1 + 0x18) == '\x02') {
        FUN_017dcb20(param_1,param_3,param_2);
      }
    }
    *param_6 = *param_6 + 1;
  }
  return;
}

