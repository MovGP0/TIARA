/* Ghidra address: 00c86d80 */
/* Ghidra symbol: FUN_00c86d80 */


void FUN_00c86d80(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x6d8);
  pcVar4 = (code *)FUN_00411550(uVar1,0xffb0);
  cVar2 = (*pcVar4)(uVar1);
  if (cVar2 != '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),local_30);
    FUN_0043ea00(local_20,local_30[0]);
    if (local_20[0] != 0) {
      iVar3 = FUN_01b1cd80(local_20[0],*(undefined8 *)(*(longlong *)(param_1 + 0x6b0) + 0x4a0),0);
      if (iVar3 == -1) {
        FUN_00416ba0(&local_38,&DAT_00c86edc,local_20[0]);
        iVar3 = FUN_01b1cd80(local_38,*(undefined8 *)(*(longlong *)(param_1 + 0x6b0) + 0x4a0),0);
      }
      if (iVar3 == -1) {
        iVar3 = 0;
      }
      if (iVar3 != -1) {
        (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
                  (*(longlong **)(param_1 + 0x6b0),iVar3);
      }
    }
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

