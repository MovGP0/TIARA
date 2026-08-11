/* Ghidra address: 011399d0 */
/* Ghidra symbol: FUN_011399d0 */


void FUN_011399d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char local_29 [9];
  
  cVar2 = FUN_00f83630(param_2,param_1 + 0xa90);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0xa18) + 8))(*(longlong **)(param_1 + 0xa18));
    if (cVar2 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x10))(*(longlong **)(param_1 + 0xa18),1);
      FUN_0082a890(*(undefined8 *)(param_1 + 0x900),0);
      (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x118))
                (*(longlong **)(param_1 + 0xa18),*(undefined1 *)(param_2 + 0x10));
      if (*(longlong *)(param_2 + 0x10) == 4) {
        (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x120))
                  (*(longlong **)(param_1 + 0xa18),local_29);
        if ((local_29[0] == '\x04') &&
           (lVar1 = *(longlong *)(param_1 + 0xa10), *(longlong *)(lVar1 + 0x20) != 0)) {
          sVar3 = (**(code **)(**(longlong **)(lVar1 + 0x20) + 0xf8))(*(longlong **)(lVar1 + 0x20));
          if (sVar3 != 100) {
            sVar3 = (**(code **)(**(longlong **)(lVar1 + 0x20) + 0xf8))
                              (*(longlong **)(lVar1 + 0x20));
            if (sVar3 != 0x3e) {
              sVar3 = (**(code **)(**(longlong **)(lVar1 + 0x20) + 0xf8))
                                (*(longlong **)(lVar1 + 0x20));
              if (sVar3 != 0x66) {
                plVar5 = (longlong *)
                         FUN_01121e50(&PTR_FUN_0111f770,1,*(undefined8 *)PTR_DAT_02004030,
                                      *(undefined8 *)(lVar1 + 0x20),1);
                (**(code **)(*plVar5 + 0x2d0))(plVar5);
                FUN_00410f20(plVar5);
                (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x130))
                          (*(longlong **)(param_1 + 0xa18));
              }
            }
          }
        }
      }
      FUN_0113cec0(param_1);
      (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x10))(*(longlong **)(param_1 + 0xa18),0);
    }
    else {
      uVar4 = FUN_0065b870(param_1);
      FUN_00f83670(uVar4,param_2);
    }
  }
  return;
}

