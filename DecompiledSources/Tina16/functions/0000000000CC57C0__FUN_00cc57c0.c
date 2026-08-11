/* Ghidra address: 00cc57c0 */
/* Ghidra symbol: FUN_00cc57c0 */


undefined8 * FUN_00cc57c0(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *local_res20;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  FUN_00414480(param_2);
  FUN_00419430(&local_30,&DAT_0086e978);
  if (param_3 != 0) {
    FUN_0086f700(&local_res20,7);
    iVar3 = (**(code **)(*local_res20 + 0xd8))(local_res20,2);
    FUN_00419260(&local_30,&DAT_0086e978,1,(longlong)iVar3);
    iVar3 = 0;
    while( true ) {
      iVar4 = 0;
      if (param_3 != 0) {
        iVar4 = *(int *)(param_3 + -4);
      }
      if (iVar4 <= iVar3) break;
      uVar1 = *(ushort *)(param_3 + -2 + (longlong)(iVar3 + 1) * 2);
      cVar2 = FUN_00cc3f50(PTR_u__<>____________01ead978,uVar1);
      if (((cVar2 == '\0') && (0x20 < uVar1)) && (uVar1 < 0x80)) {
        FUN_00416780(&local_48,uVar1);
        FUN_00416ad0(param_2,local_48);
        iVar3 = iVar3 + 1;
      }
      else {
        iVar4 = FUN_00cc3f30(param_3,iVar3 + 1);
        iVar5 = (**(code **)(*local_res20 + 0x80))(local_res20,param_3,iVar3 + 1,iVar4,&local_30,0);
        iVar6 = 0;
        if (-1 < iVar5 + -1) {
          do {
            FUN_0043fba0(local_40,*(undefined1 *)(local_30 + iVar6),2);
            FUN_00416cd0(param_2,3,*param_2,&DAT_00cc5a0c,local_40[0]);
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar3 = iVar3 + iVar4;
      }
    }
  }
  FUN_00414560(&local_48,2);
  FUN_00419430(&local_30,&DAT_0086e978);
  FUN_0041b800(&local_res20);
  return param_2;
}

