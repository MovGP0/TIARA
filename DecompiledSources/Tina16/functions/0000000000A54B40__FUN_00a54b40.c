/* Ghidra address: 00a54b40 */
/* Ghidra symbol: FUN_00a54b40 */


undefined1 FUN_00a54b40(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  cVar1 = FUN_0046c390(param_1 + 0x648);
  if (cVar1 != '\0') {
    FUN_00468a10(&local_30,L"collapse");
    cVar1 = FUN_0046f320(param_1 + 0x648,&local_30);
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_00a54b9c;
    }
  }
  uVar2 = 0;
LAB_00a54b9c:
  FUN_00460ba0(&local_30);
  return uVar2;
}

