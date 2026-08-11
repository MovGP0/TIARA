/* Ghidra address: 00986130 */
/* Ghidra symbol: FUN_00986130 */


void FUN_00986130(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  uVar5 = 0;
  if (param_3 != 0) {
    uVar5 = *(uint *)(param_3 + -4) >> 1;
  }
  uVar3 = 1;
  uVar4 = uVar5;
  while ((uVar1 = uVar5 + 1, uVar4 != 0 &&
         (cVar2 = FUN_008ff300(*(undefined2 *)(param_3 + -2 + (longlong)(int)uVar3 * 2)),
         uVar1 = uVar3, cVar2 != '\0'))) {
    uVar3 = uVar3 + 1;
    uVar4 = uVar4 - 1;
  }
  do {
    do {
      if ((int)uVar5 < (int)uVar1) {
        FUN_00414520(local_40);
        return;
      }
      uVar3 = uVar5;
      if ((int)uVar1 <= (int)uVar5) {
        iVar6 = (uVar5 - uVar1) + 1;
        uVar4 = uVar1;
        do {
          cVar2 = FUN_008ff300(*(undefined2 *)(param_3 + -2 + (longlong)(int)uVar4 * 2));
          uVar3 = uVar4;
          if (cVar2 != '\0') break;
          uVar4 = uVar4 + 1;
          iVar6 = iVar6 + -1;
          uVar3 = uVar5;
        } while (iVar6 != 0);
      }
      FUN_00416430(local_40,param_3,uVar1,uVar3 - uVar1);
      (**(code **)(*param_2 + 0x68))(param_2,local_40[0]);
      uVar3 = uVar3 + 1;
      uVar1 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar3);
    iVar6 = (uVar5 - uVar3) + 1;
    do {
      cVar2 = FUN_008ff300(*(undefined2 *)(param_3 + -2 + (longlong)(int)uVar3 * 2));
      uVar1 = uVar3;
      if (cVar2 == '\0') break;
      uVar3 = uVar3 + 1;
      iVar6 = iVar6 + -1;
      uVar1 = uVar5 + 1;
    } while (iVar6 != 0);
  } while( true );
}

