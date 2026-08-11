/* Ghidra address: 00834d30 */
/* Ghidra symbol: FUN_00834d30 */


void FUN_00834d30(longlong *param_1,short *param_2,ushort param_3)

{
  char cVar1;
  
  if ((char)param_1[0xa0] == '\0') {
    FUN_00680ce0(param_1,param_2,param_3);
  }
  cVar1 = FUN_008355d0(param_1);
  if (((cVar1 != '\0') && (*param_2 != 0)) && ((param_3 & 2) == 0)) {
    if ((*param_2 == 0x25) || (*param_2 == 0x27)) {
      FUN_00836010(param_1,*param_2,param_3);
      if (((param_3 & 1) == 0) && ((param_3 & 4) == 0)) {
        *param_2 = 0;
      }
    }
    else if ((*param_2 == 0x26) || (*param_2 == 0x28)) {
      *param_2 = 0;
    }
    else if ((*param_2 == 0x24) || (*param_2 == 0x23)) {
      FUN_008363b0(param_1,*param_2,param_3);
      *param_2 = 0;
    }
    else if (((*param_2 == 0x2e) && ((param_3 & 1) == 0)) || (*param_2 == 8)) {
      cVar1 = (**(code **)(*param_1 + 0x2a8))(param_1);
      if (cVar1 != '\0') {
        FUN_008364a0(param_1,*param_2);
      }
      *param_2 = 0;
    }
    else {
      FUN_00835cc0(param_1);
    }
  }
  return;
}

