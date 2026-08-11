/* Ghidra address: 0107b670 */
/* Ghidra symbol: FUN_0107b670 */


void FUN_0107b670(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0xb60) + 0x90))(*(longlong **)(param_1 + 0xb60));
  FUN_00416cd0(local_30,3,L"sdcc -o ",*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x10),
               L".hex ");
  if (*(int *)(param_1 + 0xad8) != 2) {
    FUN_0107aab0(param_1,&local_40);
    FUN_0107a920(param_1,&local_48,*(undefined8 *)(param_1 + 0xb38));
    FUN_00416cd0(local_30,7,local_30[0],&DAT_0107b9d0,local_40,&DAT_0107b9e0,&DAT_0107b9d0,local_48,
                 &DAT_0107b9e0);
  }
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xac8) + 0x18) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_010b2ee0(*(undefined8 *)(param_1 + 0xac8),iVar4);
      cVar1 = FUN_010af9d0(lVar2);
      if (cVar1 == '\0') {
        FUN_0107ab80(param_1,&local_58,*(undefined4 *)(param_1 + 0xad8));
        FUN_004414c0(&local_50,*(undefined8 *)(lVar2 + 0x30),local_58);
        FUN_00416cd0(local_30,3,local_30[0],local_50,&DAT_0107b9e0);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (param_2 == '\0') {
    FUN_01056150(*(undefined8 *)(param_1 + 0xb60),local_30[0],*(undefined8 *)(param_1 + 0xb40),1);
    FUN_0107b180(param_1);
    FUN_00416cd0(&local_38,4,*(undefined8 *)(param_1 + 0xb40),&DAT_0107b9f0,
                 *(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x10),L".hex");
    cVar1 = FUN_00440a20(local_38,1);
    if (cVar1 == '\0') {
      uVar3 = FUN_00b89270();
      FUN_0041ddd0(&local_68,PTR_PTR_02003858);
      FUN_00b8e650(uVar3,&local_60,L"HDLStrings.Msg_CannotCreateOutputFile",local_68);
      uVar3 = FUN_0044d490(&PTR_FUN_015ef458,1,local_60);
      FUN_004134c0(uVar3);
    }
    FUN_0107abf0(param_1);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x78))
              (*(longlong **)(param_1 + 0xb68),local_30[0]);
  }
  FUN_00414560(&local_68,8);
  return;
}

