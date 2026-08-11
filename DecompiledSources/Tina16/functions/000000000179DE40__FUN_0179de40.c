/* Ghidra address: 0179de40 */
/* Ghidra symbol: FUN_0179de40 */


void FUN_0179de40(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xbd0);
  local_40 = param_1;
  pcVar4 = (code *)FUN_00411550(uVar1,0xffb0);
  cVar2 = (*pcVar4)(uVar1);
  if (cVar2 != '\0') {
    FUN_0064dd90(*(undefined8 *)(local_40 + 0xbd0),local_30);
    FUN_0043ea00(local_20,local_30[0]);
    if (local_20[0] != 0) {
      iVar3 = FUN_0179dc90(auStack_68,local_20[0],
                           *(undefined8 *)(*(longlong *)(local_40 + 0x758) + 0x4a0),0);
      if (iVar3 == -1) {
        FUN_00416ba0(&local_38,&DAT_0179df9c,local_20[0]);
        iVar3 = FUN_0179dc90(auStack_68,local_38,
                             *(undefined8 *)(*(longlong *)(local_40 + 0x758) + 0x4a0),0);
      }
      if (iVar3 == -1) {
        iVar3 = 0;
      }
      if (iVar3 != -1) {
        (**(code **)(**(longlong **)(local_40 + 0x758) + 0x268))
                  (*(longlong **)(local_40 + 0x758),iVar3);
      }
    }
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

