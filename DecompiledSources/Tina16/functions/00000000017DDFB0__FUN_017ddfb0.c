/* Ghidra address: 017ddfb0 */
/* Ghidra symbol: FUN_017ddfb0 */


void FUN_017ddfb0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5,undefined8 *param_6,int *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00409620(param_5,(longlong)((*param_7 + 2) * 8));
    puVar1 = (undefined8 *)FUN_017dcb00(param_1,*param_5,*param_7 * 8);
    FUN_00409620(param_6,(longlong)((*param_7 + 2) * 8));
    puVar2 = (undefined8 *)FUN_017dcb00(param_1,*param_6,*param_7 * 8);
    uVar3 = FUN_00498310(param_2,param_3);
    *puVar2 = uVar3;
    uVar3 = FUN_00498310(param_2,param_4);
    puVar2[1] = uVar3;
    if (*(char *)(param_1 + 0x18) == '\x01') {
      uVar3 = thunk_FUN_041d37d3(*(undefined8 *)(param_1 + 0x1d0),param_2,param_3);
      *puVar1 = uVar3;
      uVar3 = thunk_FUN_041d37d3(*(undefined8 *)(param_1 + 0x1d0),param_2,param_4);
      puVar1[1] = uVar3;
    }
    if (*(char *)(param_1 + 0x18) == '\x02') {
      FUN_017dcb20(param_1,param_3,param_2);
      FUN_017dcb20(param_1,param_4,param_2);
    }
    *param_7 = *param_7 + 2;
  }
  return;
}

