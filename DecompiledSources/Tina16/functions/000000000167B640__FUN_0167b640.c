/* Ghidra address: 0167b640 */
/* Ghidra symbol: FUN_0167b640 */


void FUN_0167b640(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  longlong local_40 [4];
  
  uVar2 = FUN_00b92140(0);
  FUN_016ee260(param_1,local_40,0x470,0);
  if (*(byte *)(local_40[0] + 9) < 3) {
    cVar1 = FUN_01d44bc0(*(undefined1 *)(param_2 + 0xed6));
    if (cVar1 == '\0') {
      FUN_00e3fd70(local_40[0],param_1,param_2,param_3);
    }
    else {
      FUN_00e3ccd0(local_40[0],param_1,param_2,param_3);
    }
  }
  else if (*(byte *)(local_40[0] + 9) == 3) {
    FUN_00dbc2c0(local_40[0],param_1,param_2,param_3);
  }
  dVar3 = (double)FUN_00b92140(uVar2);
  *(double *)PTR_DAT_02003ff0 = dVar3 + *(double *)PTR_DAT_02003ff0;
  return;
}

