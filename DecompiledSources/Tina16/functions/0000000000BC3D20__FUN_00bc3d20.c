/* Ghidra address: 00bc3d20 */
/* Ghidra symbol: FUN_00bc3d20 */


undefined8 FUN_00bc3d20(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 0x7b) {
    if (param_3 == 0x7a) {
      FUN_00414ad0(param_2,L"TRegExpr(comp): BRACES Argument Too Big");
      return param_2;
    }
    if (param_3 < 0x6d) {
      if (param_3 == 0x6c) {
        FUN_00414ad0(param_2,L"TRegExpr(comp): Bad Hex Digit");
        return param_2;
      }
      if (param_3 < 0x68) {
        if (param_3 == 0x67) {
          FUN_00414ad0(param_2,L"TRegExpr(comp): ParseReg Unmatched ()");
          return param_2;
        }
        if (param_3 == 0) {
          FUN_00414ad0(param_2,L"No errors");
          return param_2;
        }
        if (param_3 == 100) {
          FUN_00414ad0(param_2,L"TRegExpr(comp): Null Argument");
          return param_2;
        }
        if (param_3 == 0x65) {
          FUN_00414ad0(param_2,L"TRegExpr(comp): Regexp Too Big");
          return param_2;
        }
        if (param_3 == 0x66) {
          FUN_00414ad0(param_2,L"TRegExpr(comp): ParseReg Too Many ()");
          return param_2;
        }
      }
      else {
        if (param_3 == 0x68) {
          FUN_00414ad0(param_2,L"TRegExpr(comp): ParseReg Unmatched ()");
          return param_2;
        }
        if (param_3 == 0x69) {
          FUN_00414ad0(param_2,L"TRegExpr(comp): ParseReg Junk On End");
          return param_2;
        }
        if (param_3 == 0x6a) {
          FUN_00414ad0(param_2,L"TRegExpr(comp): *+ Operand Could Be Empty");
          return param_2;
        }
        if (param_3 == 0x6b) {
          FUN_00414ad0(param_2,L"TRegExpr(comp): Nested *?+");
          return param_2;
        }
      }
    }
    else if (param_3 < 0x72) {
      if (param_3 == 0x71) {
        FUN_00414ad0(param_2,L"TRegExpr(comp): Unmatched []");
        return param_2;
      }
      if (param_3 == 0x6d) {
        FUN_00414ad0(param_2,L"TRegExpr(comp): Invalid [] Range");
        return param_2;
      }
      if (param_3 == 0x6e) {
        FUN_00414ad0(param_2,L"TRegExpr(comp): Parse Atom Trailing \\");
        return param_2;
      }
      if (param_3 == 0x6f) {
        FUN_00414ad0(param_2,L"TRegExpr(comp): No Hex Code After \\x");
        return param_2;
      }
      if (param_3 == 0x70) {
        FUN_00414ad0(param_2,L"TRegExpr(comp): Hex Code After \\x Is Too Big");
        return param_2;
      }
    }
    else {
      if (param_3 == 0x72) {
        FUN_00414ad0(param_2,L"TRegExpr(comp): Internal Urp");
        return param_2;
      }
      if (param_3 == 0x73) {
        FUN_00414ad0(param_2,L"TRegExpr(comp): ?+*{ Follows Nothing");
        return param_2;
      }
      if (param_3 == 0x74) {
        FUN_00414ad0(param_2,L"TRegExpr(comp): Trailing \\");
        return param_2;
      }
      if (param_3 == 0x77) {
        FUN_00414ad0(param_2,L"TRegExpr(comp): RarseAtom Internal Disaster");
        return param_2;
      }
    }
  }
  else if (param_3 < 0x3ed) {
    if (param_3 == 0x3ec) {
      FUN_00414ad0(param_2,L"TRegExpr(exec): Corrupted Program");
      return param_2;
    }
    if (param_3 < 0x81) {
      if (param_3 == 0x80) {
        FUN_00414ad0(param_2,
                     L"TRegExpr(comp): LinePairedSeparator must countain two different chars or no chars at all"
                    );
        return param_2;
      }
      if (param_3 == 0x7c) {
        FUN_00414ad0(param_2,L"TRegExpr(comp): BRACE Min Param Greater then Max");
        return param_2;
      }
      if (param_3 == 0x7d) {
        FUN_00414ad0(param_2,L"TRegExpr(comp): Unclosed (?#Comment)");
        return param_2;
      }
      if (param_3 == 0x7e) {
        FUN_00414ad0(param_2,
                     L"TRegExpr(comp): If you want take part in beta-testing BRACES \'{min,max}\' and non-greedy ops \'*?\', \'+?\', \'??\' for complex cases - remove \'.\' from {.$DEFINE ComplexBraces}"
                    );
        return param_2;
      }
      if (param_3 == 0x7f) {
        FUN_00414ad0(param_2,L"TRegExpr(comp): Urecognized Modifier");
        return param_2;
      }
    }
    else {
      if (param_3 == 1000) {
        FUN_00414ad0(param_2,L"TRegExpr(exec): RegRepeat Called Inappropriately");
        return param_2;
      }
      if (param_3 == 0x3e9) {
        FUN_00414ad0(param_2,L"TRegExpr(exec): MatchPrim Memory Corruption");
        return param_2;
      }
      if (param_3 == 0x3ea) {
        FUN_00414ad0(param_2,L"TRegExpr(exec): MatchPrim Corrupted Pointers");
        return param_2;
      }
      if (param_3 == 0x3eb) {
        FUN_00414ad0(param_2,L"TRegExpr(exec): Not Assigned Expression Property");
        return param_2;
      }
    }
  }
  else if (param_3 < 0x3f4) {
    if (param_3 == 0x3f3) {
      FUN_00414ad0(param_2,L"TRegExpr(dump): Corrupted Opcode");
      return param_2;
    }
    if (param_3 == 0x3ed) {
      FUN_00414ad0(param_2,L"TRegExpr(exec): No Input String Specified");
      return param_2;
    }
    if (param_3 == 0x3ee) {
      FUN_00414ad0(param_2,L"TRegExpr(exec): Offset Must Be Greater Then 0");
      return param_2;
    }
    if (param_3 == 0x3ef) {
      FUN_00414ad0(param_2,L"TRegExpr(exec): ExecNext Without Exec[Pos]");
      return param_2;
    }
    if (param_3 == 0x3f0) {
      FUN_00414ad0(param_2,L"TRegExpr(exec): GetInputString Without InputString");
      return param_2;
    }
  }
  else {
    if (param_3 == 0x3f6) {
      FUN_00414ad0(param_2,L"TRegExpr(exec): Loop Stack Exceeded");
      return param_2;
    }
    if (param_3 == 0x3f7) {
      FUN_00414ad0(param_2,L"TRegExpr(exec): Loop Without LoopEntry !");
      return param_2;
    }
    if (param_3 == 2000) {
      FUN_00414ad0(param_2,L"TRegExpr(misc): Bad p-code imported");
      return param_2;
    }
  }
  FUN_00414ad0(param_2,L"Unknown error");
  return param_2;
}

