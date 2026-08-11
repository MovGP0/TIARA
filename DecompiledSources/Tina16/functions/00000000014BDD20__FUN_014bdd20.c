/* Ghidra address: 014bdd20 */
/* Ghidra symbol: FUN_014bdd20 */


void FUN_014bdd20(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x6e8);
  uVar2 = FUN_006edb30(*(undefined8 *)(lVar1 + 0x500));
  FUN_006ed740(uVar2,L"Name");
  FUN_006ed880(uVar2,0);
  FUN_006ed840(uVar2,0x96);
  uVar2 = FUN_006edb30(*(undefined8 *)(lVar1 + 0x500));
  FUN_006ed740(uVar2,L"Size");
  FUN_006ed880(uVar2,0);
  FUN_006ed840(uVar2,0x50);
  uVar2 = FUN_006edb30(*(undefined8 *)(lVar1 + 0x500));
  FUN_006ed740(uVar2,L"Date");
  FUN_006ed880(uVar2,0);
  FUN_006ed840(uVar2,0x8c);
  return;
}

