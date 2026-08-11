/* Ghidra address: 017dd990 */
/* Ghidra symbol: FUN_017dd990 */


void FUN_017dd990(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 *param_6,undefined8 *param_7,int *param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00409620(param_6,(longlong)((*param_8 + 4) * 8));
    puVar1 = (undefined8 *)FUN_017dcb00(param_1,*param_6,*param_8 * 8);
    FUN_00409620(param_7,(longlong)((*param_8 + 4) * 8));
    puVar2 = (undefined8 *)FUN_017dcb00(param_1,*param_7,*param_8 * 8);
    uVar3 = FUN_00498310(param_4,param_2);
    *puVar2 = uVar3;
    uVar3 = FUN_00498310(param_4,param_3);
    puVar2[1] = uVar3;
    uVar3 = FUN_00498310(param_5,param_2);
    puVar2[2] = uVar3;
    uVar3 = FUN_00498310(param_5,param_3);
    puVar2[3] = uVar3;
    if (*(char *)(param_1 + 0x18) == '\x01') {
      uVar3 = thunk_FUN_041d37d3(*(undefined8 *)(param_1 + 0x1d0),param_4,param_2);
      *puVar1 = uVar3;
      uVar3 = thunk_FUN_041d37d3(*(undefined8 *)(param_1 + 0x1d0),param_4,param_3);
      puVar1[1] = uVar3;
      uVar3 = thunk_FUN_041d37d3(*(undefined8 *)(param_1 + 0x1d0),param_5,param_2);
      puVar1[2] = uVar3;
      uVar3 = thunk_FUN_041d37d3(*(undefined8 *)(param_1 + 0x1d0),param_5,param_3);
      puVar1[3] = uVar3;
    }
    if (*(char *)(param_1 + 0x18) == '\x02') {
      FUN_017dcb20(param_1,param_2,param_4);
      FUN_017dcb20(param_1,param_3,param_4);
      FUN_017dcb20(param_1,param_2,param_5);
      FUN_017dcb20(param_1,param_3,param_5);
    }
    *param_8 = *param_8 + 4;
  }
  return;
}

