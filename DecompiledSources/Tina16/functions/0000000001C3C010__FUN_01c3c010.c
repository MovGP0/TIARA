/* Ghidra address: 01c3c010 */
/* Ghidra symbol: FUN_01c3c010 */


undefined1 FUN_01c3c010(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6c0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x260))(*(longlong **)(param_1 + 0x7a0))
    ;
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x260))
                        (*(longlong **)(param_1 + 0x7b8));
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))
                          (*(longlong **)(param_1 + 0x7c0));
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))
                            (*(longlong **)(param_1 + 0x7d8));
          if (cVar1 == '\0') {
            uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"[Error] @ GetSource!");
            uVar2 = FUN_004134c0(uVar3);
          }
          else {
            uVar2 = 4;
          }
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x908);
  }
  return uVar2;
}

