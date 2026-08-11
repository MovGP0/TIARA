/* Ghidra address: 016ffe90 */
/* Ghidra symbol: FUN_016ffe90 */


void FUN_016ffe90(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 local_res10 [3];
  undefined1 local_28 [16];
  undefined8 local_18;
  double local_10;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar6 = FUN_016ffc70(param_1,local_res10[0]);
  *param_3 = uVar6;
  dVar7 = (double)FUN_016ffc70(param_1,local_res10[0]);
  *param_4 = dVar7;
  puVar1 = *(undefined **)(param_1 + 0xb0);
  if (puVar1 == &DAT_01700084) {
    bVar5 = true;
  }
  else if (puVar1 == (undefined *)0x0) {
    bVar5 = false;
  }
  else {
    iVar4 = FUN_0043e420(puVar1,&DAT_01700084);
    bVar5 = iVar4 == 0;
  }
  if (bVar5) {
    bVar5 = true;
  }
  else {
    puVar2 = *(undefined1 **)(param_1 + 0xb0);
    if (puVar2 == &LAB_01700098) {
      bVar5 = true;
    }
    else if (puVar2 == (undefined1 *)0x0) {
      bVar5 = false;
    }
    else {
      iVar4 = FUN_0043e420(puVar2,&LAB_01700098);
      bVar5 = iVar4 == 0;
    }
  }
  if (((bVar5) && (cVar3 = FUN_00526f10(*param_3), cVar3 == '\0')) &&
     (cVar3 = FUN_00526f10(*param_4), cVar3 == '\0')) {
    puVar2 = *(undefined1 **)(param_1 + 0xb0);
    if (puVar2 == &LAB_01700098) {
      bVar5 = true;
    }
    else if (puVar2 == (undefined1 *)0x0) {
      bVar5 = false;
    }
    else {
      iVar4 = FUN_0043e420(puVar2,&LAB_01700098);
      bVar5 = iVar4 == 0;
    }
    if (bVar5) {
      uVar6 = FUN_00c43d30(*param_3);
      *param_3 = uVar6;
    }
    FUN_00c44460(local_28,*param_3,*param_4 * 0.017453292519943295);
    FUN_00c44940(&local_18,local_28);
    *param_3 = local_18;
    *param_4 = local_10;
  }
  FUN_00414480(local_res10);
  return;
}

