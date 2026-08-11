/* Ghidra address: 00ce8d90 */
/* Ghidra symbol: FUN_00ce8d90 */


undefined1 FUN_00ce8d90(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_2c;
  longlong *local_28;
  undefined1 local_19;
  
  local_40 = auStack_68;
  local_19 = 0;
  FUN_00ce9860(param_1,1);
  if (param_4 != '\0') {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
    local_2c = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_28 = (longlong *)FUN_00ce6f60(*(undefined8 *)(param_1 + 0x30),local_2c);
        cVar1 = FUN_00879070(local_28[6],*(undefined8 *)(param_2 + 0x30));
        if (((cVar1 != '\0') &&
            (cVar1 = FUN_00879070(local_28[3],*(undefined8 *)(param_2 + 0x18)), cVar1 != '\0')) &&
           (cVar1 = FUN_00879070(local_28[7],*(undefined8 *)(param_2 + 0x38)), cVar1 != '\0')) {
          if (((param_3 != 0) &&
              (cVar1 = FUN_00ce6df0(*(undefined8 *)(param_3 + 0x10)), cVar1 == '\0')) &&
             ((char)local_28[5] != '\0')) {
            FUN_00ce8f10(0,local_40);
            return local_19;
          }
          *(longlong *)(param_2 + 0x50) = local_28[10];
          FUN_004ae870(*(undefined8 *)(param_1 + 0x30),local_2c);
          (**(code **)(*local_28 + 0x20))(local_28,0);
          FUN_00410f20(local_28);
          break;
        }
        local_2c = local_2c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  cVar1 = FUN_00ce84a0(param_2);
  if (cVar1 == '\0') {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x30),param_2);
    local_19 = 1;
  }
  FUN_00ce98a0(param_1,1);
  return local_19;
}

