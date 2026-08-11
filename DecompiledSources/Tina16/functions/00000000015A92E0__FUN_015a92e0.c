/* Ghidra address: 015a92e0 */
/* Ghidra symbol: FUN_015a92e0 */


void FUN_015a92e0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 != *(longlong *)(param_1 + 0x18)) {
    cVar1 = FUN_015a9280(auStack_38,param_2);
    if (cVar1 == '\0') {
      FUN_0041ddd0(&local_10,PTR_PTR_02001c90);
      uVar2 = FUN_0044d490(&PTR_FUN_015a7918,1,local_10);
      FUN_004134c0(uVar2);
    }
    else {
      FUN_015a9480(*(undefined8 *)(param_1 + 0x18));
      *(longlong *)(param_1 + 0x18) = param_2;
      FUN_015a94e0(*(undefined8 *)(param_1 + 0x18));
    }
  }
  FUN_00414480(&local_10);
  return;
}

