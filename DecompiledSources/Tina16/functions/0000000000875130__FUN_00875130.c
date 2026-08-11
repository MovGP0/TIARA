/* Ghidra address: 00875130 */
/* Ghidra symbol: FUN_00875130 */


code * FUN_00875130(void)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = FUN_00427be0(L"KERNEL32");
  pcVar2 = (code *)FUN_00427c10(uVar1,L"GetTickCount64");
  if (pcVar2 == (code *)0x0) {
    pcVar2 = FUN_00875120;
  }
  return pcVar2;
}

