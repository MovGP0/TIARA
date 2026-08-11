/* Ghidra address: 01c1c0e0 */
/* Ghidra symbol: FUN_01c1c0e0 */


undefined ** FUN_01c1c0e0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  cVar1 = FUN_00781870();
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bd2b58);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bdee40);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bddf60);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bdd620);
          if (cVar1 == '\0') {
            ppuVar2 = &PTR_FUN_01c08f98;
          }
          else {
            ppuVar2 = &PTR_FUN_01c07e08;
          }
        }
        else {
          if ((*(longlong *)(param_2 + 0x5d0) != 0) &&
             (lVar4 = FUN_01bfaa40(param_3),
             lVar4 == *(longlong *)(*(longlong *)(param_2 + 0x5d0) + 0x688))) {
            return &PTR_FUN_01c0a0b0;
          }
          ppuVar2 = &PTR_FUN_01c07e08;
        }
      }
      else {
        ppuVar2 = &PTR_FUN_01c08208;
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
            return &PTR_FUN_01c08f98;
          }
        }
        ppuVar2 = &PTR_FUN_01bd1df8;
      }
      else {
        ppuVar2 = &PTR_FUN_01c09338;
      }
    }
  }
  else {
    ppuVar2 = (undefined **)
              (**(code **)**(undefined8 **)PTR_DAT_02004068)
                        (*(undefined8 **)PTR_DAT_02004068,param_2,param_3);
  }
  return ppuVar2;
}

