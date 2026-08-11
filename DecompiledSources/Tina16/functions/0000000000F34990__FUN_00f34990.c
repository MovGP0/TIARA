/* Ghidra address: 00f34990 */
/* Ghidra symbol: FUN_00f34990 */


undefined8 * FUN_00f34990(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  ulonglong local_38;
  uint local_30;
  undefined8 local_28;
  
  FUN_00417580(local_48,&DAT_00f21978);
  puVar3 = param_1;
  if ((param_1 != (undefined8 *)0x0) && (puVar3 = param_1, param_2 != 0)) {
    local_50 = (undefined8 *)0x0;
    FUN_00f2c880(local_48,param_2);
    do {
      while( true ) {
        while( true ) {
          puVar3 = param_1;
          if ((local_38 <= local_40) ||
             (cVar4 = FUN_00f2c8c0(local_48), uVar2 = local_30, puVar3 = local_50, cVar4 == '\0'))
          goto LAB_00f34a70;
          if (cVar4 != '\x01') break;
          if (((undefined1 *)*param_1 != &LAB_00f23b78) ||
             (param_1 = (undefined8 *)FUN_00f30cb0(param_1,local_28), param_1 == (undefined8 *)0x0))
          goto LAB_00f34a70;
        }
        if (cVar4 != '\x02') break;
        if (((undefined1 *)*param_1 != &LAB_00f256b8) ||
           (lVar1 = param_1[2], *(int *)(lVar1 + 0x10) <= (int)local_30)) goto LAB_00f34a70;
        if (*(uint *)(lVar1 + 0x10) <= local_30) {
          FUN_00594f90();
        }
        param_1 = *(undefined8 **)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8);
      }
    } while (cVar4 != '\x04');
  }
LAB_00f34a70:
  local_50 = puVar3;
  FUN_00417740(local_48,&DAT_00f21978);
  return local_50;
}

