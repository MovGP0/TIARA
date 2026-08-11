/* Ghidra address: 0161b490 */
/* Ghidra symbol: FUN_0161b490 */


void FUN_0161b490(longlong param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 local_30 [2];
  int local_1c;
  
  local_30[0] = 0;
  iVar3 = 0;
LAB_0161b519:
  do {
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x10) <= iVar3) {
      FUN_00414480(local_30);
      return;
    }
    lVar2 = FUN_004aeac0(*(longlong *)(param_1 + 0x10),iVar3);
    if (*(int *)(lVar2 + 8) == 5) {
      FUN_0043f750(local_30,param_2);
      iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 0x10),local_30[0]);
      if (iVar1 == 0) {
        FUN_004ae870(*(undefined8 *)(param_1 + 0x10),iVar3);
        FUN_00410f20(lVar2);
        FUN_0161b150(param_1,*(undefined8 *)(param_3 + 0x10),0,&local_1c);
        iVar3 = iVar3 + local_1c;
        goto LAB_0161b519;
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

