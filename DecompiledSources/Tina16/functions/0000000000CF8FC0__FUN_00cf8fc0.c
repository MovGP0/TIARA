/* Ghidra address: 00cf8fc0 */
/* Ghidra symbol: FUN_00cf8fc0 */


void FUN_00cf8fc0(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 local_10;
  
  local_10 = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 9) = 0;
  iVar3 = FUN_00879980();
  if (iVar3 == 1) {
    FUN_00414b50(&local_10,L"secur32.dll");
  }
  else {
    FUN_00414b50(&local_10,L"security.dll");
  }
  uVar4 = FUN_00452dc0(local_10,0x8000);
  *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18) = uVar4;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18);
  if (lVar1 != 0) {
    pcVar5 = (code *)FUN_00427c10(lVar1,L"InitSecurityInterfaceW");
    uVar4 = (*pcVar5)();
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x10) = uVar4;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
    if (((((*(longlong *)(lVar1 + 0x88) == 0) || (*(longlong *)(lVar1 + 0x80) == 0)) ||
         (*(longlong *)(lVar1 + 0x48) == 0)) ||
        ((((*(longlong *)(lVar1 + 0x20) == 0 || (*(longlong *)(lVar1 + 0x18) == 0)) ||
          ((*(longlong *)(lVar1 + 0x30) == 0 ||
           ((*(longlong *)(lVar1 + 0x38) == 0 || (*(longlong *)(lVar1 + 0x60) == 0)))))) ||
         (*(longlong *)(lVar1 + 0x68) == 0)))) ||
       (((*(longlong *)(lVar1 + 0x58) == 0 || (*(longlong *)(lVar1 + 0x70) == 0)) ||
        (*(longlong *)(lVar1 + 0x78) == 0)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 9) = uVar2;
    if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) + 200) == 0) {
      uVar4 = FUN_00427c10(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18),L"EncryptMessage");
      *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) + 200) = uVar4;
    }
    if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) + 0xd0) == 0) {
      uVar4 = FUN_00427c10(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18),L"DecryptMessage");
      *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) + 0xd0) = uVar4;
    }
  }
  FUN_00414480(&local_10);
  return;
}

