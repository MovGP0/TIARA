/* Ghidra address: 01c98960 */
/* Ghidra symbol: FUN_01c98960 */


void FUN_01c98960(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(longlong *)PTR_DAT_020057d0 != 0) {
    cVar2 = (**(code **)(**(longlong **)PTR_DAT_020057d0 + 0xf8))(*(longlong **)PTR_DAT_020057d0);
    if ((((cVar2 != '\0') && (*(char *)(*(longlong *)PTR_DAT_020057d0 + 0x896) != '\0')) &&
        (*(longlong *)(param_1 + 0x2768) != 0)) &&
       (*(char *)(*(longlong *)(param_1 + 0x2768) + 0x70) == '\x02')) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x2768) + 0xb0);
      (**(code **)(*plVar1 + 0x10))
                (plVar1,*(undefined8 *)
                         (*(longlong *)(*(longlong *)PTR_DAT_020057d0 + 0x860) + 0x4e8));
    }
  }
  FUN_01c94450(param_1,0);
  return;
}

