/* Ghidra address: 00bac620 */
/* Ghidra symbol: FUN_00bac620 */


void FUN_00bac620(undefined8 param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  iVar2 = 1;
  while ((!bVar3 && (iVar2 < 0x66))) {
    iVar1 = FUN_0043e210(param_1,(&PTR_u_Unable_to_save_character_to__s_e_01e971b0)
                                 [(longlong)iVar2 * 2]);
    bVar3 = iVar1 == 0;
    if (bVar3) {
      *param_2 = *(undefined2 *)(&DAT_01e971a8 + (longlong)iVar2 * 0x10);
    }
    else {
      iVar2 = iVar2 + 1;
    }
  }
  return;
}

