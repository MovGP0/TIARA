/* Ghidra address: 01d850a0 */
/* Ghidra symbol: FUN_01d850a0 */


longlong FUN_01d850a0(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  char cVar2;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_0041b800(local_res8 + 0x10);
  *(code **)(local_res8 + 0x40) = FUN_01d85050;
  *(undefined1 *)(local_res8 + 0x28) = DAT_0200c278;
  cVar2 = FUN_01d85060(auStack_48,L"AUTOMATION");
  if (cVar2 == '\0') {
    cVar2 = FUN_01d85060(auStack_48,L"EMBEDDING");
    if (cVar2 == '\0') {
      cVar2 = FUN_01d85060(auStack_48,L"REGSERVER");
      if (cVar2 == '\0') {
        cVar2 = FUN_01d85060(auStack_48,L"UNREGSERVER");
        if (cVar2 == '\0') {
          cVar2 = FUN_01d85060(auStack_48,L"REGSERVERPERUSER");
          if (cVar2 == '\0') {
            cVar2 = FUN_01d85060(auStack_48,L"UNREGSERVERPERUSER");
            if (cVar2 != '\0') {
              *PTR_DAT_020035f8 = 1;
              *(undefined1 *)(local_res8 + 0x29) = 3;
            }
          }
          else {
            *PTR_DAT_020035f8 = 1;
            *(undefined1 *)(local_res8 + 0x29) = 2;
          }
        }
        else {
          *PTR_DAT_020035f8 = 0;
          *(undefined1 *)(local_res8 + 0x29) = 3;
        }
      }
      else {
        *PTR_DAT_020035f8 = 0;
        *(undefined1 *)(local_res8 + 0x29) = 2;
      }
      goto LAB_01d851c5;
    }
  }
  *(undefined1 *)(local_res8 + 0x29) = 1;
LAB_01d851c5:
  *(undefined1 *)(local_res8 + 0x2c) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

