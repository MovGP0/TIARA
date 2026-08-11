/* Ghidra address: 01b8b360 */
/* Ghidra symbol: FUN_01b8b360 */


void FUN_01b8b360(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  int local_60;
  int local_5c;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined8 local_50;
  undefined8 local_48 [4];
  
  local_48[0] = 0;
  local_50 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x3a8) + 0x10);
  local_60 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x3a8),local_60);
      cVar1 = FUN_01b80350(*(undefined8 *)(lVar4 + 0x10));
      if (cVar1 != '\0') {
        FUN_00414480(local_48);
        iVar3 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x1c8))(*(longlong **)(lVar4 + 8));
        FUN_00419260(lVar4 + 0x28,&DAT_01b7f6f8,1,(longlong)iVar3);
        local_5c = 0;
        if (-1 < iVar3 + -1) {
          do {
            (**(code **)(**(longlong **)(lVar4 + 8) + 0x1f0))
                      (*(longlong **)(lVar4 + 8),local_5c,local_58,local_54);
            (**(code **)(**(longlong **)(lVar4 + 8) + 0x298))
                      (*(longlong **)(lVar4 + 8),&local_50,local_5c);
            uVar2 = FUN_01b8b0e0(auStack_88,lVar4,local_58);
            *(undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)local_5c) = uVar2;
            local_5c = local_5c + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      local_60 = local_60 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_50,2);
  return;
}

