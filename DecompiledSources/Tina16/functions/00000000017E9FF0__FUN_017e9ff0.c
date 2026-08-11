/* Ghidra address: 017e9ff0 */
/* Ghidra symbol: FUN_017e9ff0 */


void FUN_017e9ff0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_1c;
  
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  if (*(longlong *)(param_1 + 0x900) != 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x4e8) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        cVar1 = FUN_013b4b50(*(undefined8 *)(param_1 + 0x4e8),iVar3);
        if (cVar1 == '\0') {
          FUN_013b4b30(*(undefined8 *)(param_1 + 0x4e8),iVar3,&local_30);
          FUN_013b4bc0(*(undefined8 *)(param_1 + 0x4e8),iVar3,local_70);
          cVar1 = FUN_00c53800(local_30,&local_1c);
          if (cVar1 != '\0') {
            uVar2 = FUN_0040c840(local_68);
            FUN_017ea130(param_1,*(undefined8 *)(param_1 + 0x900),local_1c,uVar2);
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_00414560(&local_40,4);
  return;
}

