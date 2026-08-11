/* Ghidra address: 00a98710 */
/* Ghidra symbol: FUN_00a98710 */


void FUN_00a98710(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_38;
  longlong *local_30;
  
  local_38 = 0;
  if (param_2[0x19] != 0) {
    FUN_00414b50(&local_38,param_2[0x19]);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_30 = (longlong *)FUN_00ac1a90(*(undefined8 *)(param_1 + 0x30),iVar3);
        cVar1 = FUN_004113d0(local_30,&PTR_FUN_00a89bc8);
        if (((cVar1 != '\0') && (local_30 != param_2)) &&
           (iVar2 = FUN_0043e420(local_30[0x19],local_38), iVar2 == 0)) {
          FUN_00a9b310(local_30,0);
          (**(code **)(*local_30 + 0x148))(local_30,0);
          (**(code **)(*local_30 + 0x120))(local_30);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_00414480(&local_38);
  return;
}

