/* Ghidra address: 014dd200 */
/* Ghidra symbol: FUN_014dd200 */


void FUN_014dd200(longlong param_1,longlong param_2)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  short sVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  uVar2 = FUN_014dcff0(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_2 + 8),
                       *(undefined2 *)(param_1 + 0x58));
  if ((uVar2 == 0) || (*(ushort *)(param_1 + 0x58) < uVar2)) goto code_r0x014dd4f2;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_016a09d8);
  if ((cVar1 == '\0') && (*(char *)(param_2 + 0x30) != '\x01')) goto code_r0x014dd4f2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x68) == 0) {
    uVar3 = FUN_01cfd270(*(undefined8 *)(param_1 + 0x50),0,uVar2 - 2);
    FUN_00b909d0(param_1 + 0x28,uVar3);
    cVar1 = FUN_01cfd030(*(undefined8 *)(param_1 + 0x50),uVar2 - 1);
    if (cVar1 == '\x01') {
      FUN_00415020(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),0x1e);
    }
    else if (cVar1 == '\x02') {
      sVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xf8))(*(longlong **)(param_1 + 0x50));
      if (sVar4 == 0x40b) {
LAB_014dd347:
        cVar1 = FUN_004113d0(param_2,&PTR_FUN_016a09d8);
        if (cVar1 != '\0') {
          FUN_004169a0(&local_20,*(undefined8 *)(param_2 + 0x28));
          uVar3 = FUN_00dd0460(local_20);
          **(undefined2 **)(param_1 + 0x28) = uVar3;
          goto LAB_014dd4d1;
        }
      }
      else {
        sVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xf8))
                          (*(longlong **)(param_1 + 0x50));
        if (sVar4 == 0x40a) goto LAB_014dd347;
      }
      uVar3 = FUN_0040c770(*(undefined8 *)(param_2 + 0x28));
      **(undefined2 **)(param_1 + 0x28) = uVar3;
    }
    else if (cVar1 == '\x03') {
      **(undefined8 **)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    }
  }
  else {
    uVar3 = FUN_01d36e90(*(undefined8 *)(param_1 + 0x68),0,uVar2 - 2);
    FUN_00b909d0(param_1 + 0x28,uVar3);
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)(uVar2 - 1));
    if (cVar1 == '\x01') {
      FUN_00415020(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),0x1e);
    }
    else if (cVar1 == '\x02') {
      sVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xf8))(*(longlong **)(param_1 + 0x50));
      if (sVar4 == 0x40b) {
LAB_014dd468:
        cVar1 = FUN_004113d0(param_2,&PTR_FUN_016a09d8);
        if (cVar1 != '\0') {
          FUN_004169a0(&local_28,*(undefined8 *)(param_2 + 0x28));
          uVar3 = FUN_00dd0460(local_28);
          **(undefined2 **)(param_1 + 0x28) = uVar3;
          goto LAB_014dd4d1;
        }
      }
      else {
        sVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xf8))
                          (*(longlong **)(param_1 + 0x50));
        if (sVar4 == 0x40a) goto LAB_014dd468;
      }
      uVar3 = FUN_0040c770(*(undefined8 *)(param_2 + 0x28));
      **(undefined2 **)(param_1 + 0x28) = uVar3;
    }
    else if (cVar1 == '\x03') {
      **(undefined8 **)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    }
  }
LAB_014dd4d1:
  if (*(longlong *)(param_1 + 0x70) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + (longlong)(int)(uVar2 - 1)) = 0;
  }
code_r0x014dd4f2:
  FUN_00414560(&local_28,2);
  return;
}

