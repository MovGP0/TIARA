/* Ghidra address: 00dfa6e0 */
/* Ghidra symbol: FUN_00dfa6e0 */


void FUN_00dfa6e0(longlong param_1,longlong param_2,char param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined4 local_c;
  
  if (param_3 == '\f') {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
    local_c = 0;
    FUN_017de540(*(undefined8 *)(param_2 + 0xd8),**(undefined8 **)(lVar1 + 0x18),
                 *(undefined8 *)(lVar1 + 0x58),0,&local_c);
  }
  else {
    *(undefined1 *)(*(longlong *)(param_2 + 0x110) + 0xc) = 1;
  }
  return;
}

