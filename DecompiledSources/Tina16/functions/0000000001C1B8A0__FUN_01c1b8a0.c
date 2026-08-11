/* Ghidra address: 01c1b8a0 */
/* Ghidra symbol: FUN_01c1b8a0 */


undefined ** FUN_01c1b8a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bd2b58);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bdee40);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bddf60);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bdd620);
        if (cVar1 == '\0') {
          cVar1 = FUN_01c1b7b0();
          if (cVar1 == '\0') {
            ppuVar2 = &PTR_FUN_01c10140;
          }
          else if (cVar1 == '\x01') {
            ppuVar2 = &PTR_FUN_01c08f98;
          }
          else {
            ppuVar2 = &PTR_FUN_01c146c0;
          }
        }
        else {
          cVar1 = FUN_01c1b7b0();
          if (cVar1 == '\0') {
            ppuVar2 = &PTR_FUN_01c0e378;
          }
          else if (cVar1 == '\x01') {
            ppuVar2 = &PTR_FUN_01c07e08;
          }
          else {
            ppuVar2 = &PTR_FUN_01c134b8;
          }
        }
      }
      else {
        if ((*(longlong *)(param_2 + 0x5d0) != 0) &&
           (lVar4 = FUN_01bfaa40(param_3),
           lVar4 == *(longlong *)(*(longlong *)(param_2 + 0x5d0) + 0x688))) {
          cVar1 = FUN_01c1b7b0();
          if (cVar1 == '\0') {
            return &PTR_FUN_01c0f7d8;
          }
          if (cVar1 == '\x01') {
            return &PTR_FUN_01c0a0b0;
          }
          return &PTR_FUN_01c157f0;
        }
        cVar1 = FUN_01c1b7b0();
        if (cVar1 == '\0') {
          ppuVar2 = &PTR_FUN_01c0e378;
        }
        else if (cVar1 == '\x01') {
          ppuVar2 = &PTR_FUN_01c07e08;
        }
        else {
          ppuVar2 = &PTR_FUN_01c134b8;
        }
      }
    }
    else {
      cVar1 = FUN_01c1b7b0();
      if (cVar1 == '\0') {
        ppuVar2 = &PTR_FUN_01c0e740;
      }
      else if (cVar1 == '\x01') {
        ppuVar2 = &PTR_FUN_01c08208;
      }
      else {
        ppuVar2 = &PTR_FUN_01c13950;
      }
    }
  }
  else {
    cVar1 = FUN_01bfaa20(param_3);
    if (cVar1 == '\0') {
      uVar3 = FUN_01bfd980(param_3);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_006a2930);
      if (cVar1 == '\0') {
        uVar3 = FUN_01bfd980(param_3);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_006a1cb8);
        if (cVar1 == '\0') {
          cVar1 = FUN_01c1b7b0();
          if (cVar1 == '\0') {
            return &PTR_FUN_01c10140;
          }
          if (cVar1 == '\x01') {
            return &PTR_FUN_01c08f98;
          }
          return &PTR_FUN_01c146c0;
        }
      }
      ppuVar2 = &PTR_FUN_01bd1df8;
    }
    else {
      cVar1 = FUN_01c1b7b0();
      if (cVar1 == '\0') {
        ppuVar2 = &PTR_FUN_01c104f0;
      }
      else if (cVar1 == '\x01') {
        ppuVar2 = &PTR_FUN_01c09338;
      }
      else {
        ppuVar2 = &PTR_FUN_01c14a70;
      }
    }
  }
  return ppuVar2;
}

